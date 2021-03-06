// This file implements the ICreateTypeLib Interface and Gateway for Python.
// Generated by makegw.py

#include "stdafx.h"
#include "PythonCOM.h"
#include "PythonCOMServer.h"
#include "PyICreateTypeLib.h"

// @doc - This file contains autoduck documentation
// ---------------------------------------------------
//
// Interface Implementation

PyICreateTypeLib::PyICreateTypeLib(IUnknown *pdisp) : PyIUnknown(pdisp) { ob_type = &type; }

PyICreateTypeLib::~PyICreateTypeLib() {}

/* static */ ICreateTypeLib *PyICreateTypeLib::GetI(PyObject *self) { return (ICreateTypeLib *)PyIUnknown::GetI(self); }

// @pymethod |PyICreateTypeLib|CreateTypeInfo|Description of CreateTypeInfo.
PyObject *PyICreateTypeLib::CreateTypeInfo(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    // @pyparm <o unicode>|szName||Description for szName

    long tkind;
    PyObject *obszName;
    LPOLESTR szName;
    ICreateTypeInfo *ppCTInfo;
    if (!PyArg_ParseTuple(args, "Ol:CreateTypeInfo", &obszName, &tkind))
        return NULL;
    BOOL bPythonIsHappy = TRUE;
    if (!PyWinObject_AsBstr(obszName, &szName))
        bPythonIsHappy = FALSE;
    if (!bPythonIsHappy)
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->CreateTypeInfo(szName, (TYPEKIND)tkind, &ppCTInfo);
    PY_INTERFACE_POSTCALL;
    SysFreeString(szName);

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    return PyCom_PyObjectFromIUnknown(ppCTInfo, IID_ICreateTypeInfo, FALSE);
}

// @pymethod |PyICreateTypeLib|SetName|Description of SetName.
PyObject *PyICreateTypeLib::SetName(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    // @pyparm <o unicode>|szName||Description for szName
    PyObject *obszName;
    LPOLESTR szName;
    if (!PyArg_ParseTuple(args, "O:SetName", &obszName))
        return NULL;
    BOOL bPythonIsHappy = TRUE;
    if (!PyWinObject_AsBstr(obszName, &szName))
        bPythonIsHappy = FALSE;
    if (!bPythonIsHappy)
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SetName(szName);
    PY_INTERFACE_POSTCALL;
    SysFreeString(szName);

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyICreateTypeLib|SetVersion|Description of SetVersion.
PyObject *PyICreateTypeLib::SetVersion(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    // @pyparm int|wMajorVerNum||Description for wMajorVerNum
    // @pyparm int|wMinorVerNum||Description for wMinorVerNum
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    if (!PyArg_ParseTuple(args, "ii:SetVersion", &wMajorVerNum, &wMinorVerNum))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SetVersion(wMajorVerNum, wMinorVerNum);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyICreateTypeLib|SetGuid|Description of SetGuid.
PyObject *PyICreateTypeLib::SetGuid(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    // @pyparm <o PyIID>|guid||Description for guid
    PyObject *obguid;
    IID guid;
    if (!PyArg_ParseTuple(args, "O:SetGuid", &obguid))
        return NULL;
    BOOL bPythonIsHappy = TRUE;
    if (!PyWinObject_AsIID(obguid, &guid))
        bPythonIsHappy = FALSE;
    if (!bPythonIsHappy)
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SetGuid(guid);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyICreateTypeLib|SetDocString|Description of SetDocString.
PyObject *PyICreateTypeLib::SetDocString(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    // @pyparm <o unicode>|szDoc||Description for szDoc
    PyObject *obszDoc;
    LPOLESTR szDoc;
    if (!PyArg_ParseTuple(args, "O:SetDocString", &obszDoc))
        return NULL;
    BOOL bPythonIsHappy = TRUE;
    if (!PyWinObject_AsBstr(obszDoc, &szDoc))
        bPythonIsHappy = FALSE;
    if (!bPythonIsHappy)
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SetDocString(szDoc);
    PY_INTERFACE_POSTCALL;
    SysFreeString(szDoc);

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyICreateTypeLib|SetHelpFileName|Description of SetHelpFileName.
PyObject *PyICreateTypeLib::SetHelpFileName(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    // @pyparm <o unicode>|szHelpFileName||Description for szHelpFileName
    PyObject *obszHelpFileName;
    LPOLESTR szHelpFileName;
    if (!PyArg_ParseTuple(args, "O:SetHelpFileName", &obszHelpFileName))
        return NULL;
    BOOL bPythonIsHappy = TRUE;
    if (!PyWinObject_AsBstr(obszHelpFileName, &szHelpFileName))
        bPythonIsHappy = FALSE;
    if (!bPythonIsHappy)
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SetHelpFileName(szHelpFileName);
    PY_INTERFACE_POSTCALL;
    SysFreeString(szHelpFileName);

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyICreateTypeLib|SetHelpContext|Description of SetHelpContext.
PyObject *PyICreateTypeLib::SetHelpContext(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    // @pyparm int|dwHelpContext||Description for dwHelpContext
    DWORD dwHelpContext;
    if (!PyArg_ParseTuple(args, "l:SetHelpContext", &dwHelpContext))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SetHelpContext(dwHelpContext);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyICreateTypeLib|SetLcid|Description of SetLcid.
PyObject *PyICreateTypeLib::SetLcid(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    long lcid;
    if (!PyArg_ParseTuple(args, "l:SetLcid", &lcid))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SetLcid(lcid);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyICreateTypeLib|SetLibFlags|Description of SetLibFlags.
PyObject *PyICreateTypeLib::SetLibFlags(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    // @pyparm int|uLibFlags||Description for uLibFlags
    UINT uLibFlags;
    if (!PyArg_ParseTuple(args, "i:SetLibFlags", &uLibFlags))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SetLibFlags(uLibFlags);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyICreateTypeLib|SaveAllChanges|Description of SaveAllChanges.
PyObject *PyICreateTypeLib::SaveAllChanges(PyObject *self, PyObject *args)
{
    ICreateTypeLib *pICTL = GetI(self);
    if (pICTL == NULL)
        return NULL;
    if (!PyArg_ParseTuple(args, ":SaveAllChanges"))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pICTL->SaveAllChanges();
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pICTL, IID_ICreateTypeLib);
    Py_INCREF(Py_None);
    return Py_None;
}

// @object PyICreateTypeLib|Description of the interface
static struct PyMethodDef PyICreateTypeLib_methods[] = {
    {"CreateTypeInfo", PyICreateTypeLib::CreateTypeInfo, 1},  // @pymeth CreateTypeInfo|Description of CreateTypeInfo
    {"SetName", PyICreateTypeLib::SetName, 1},                // @pymeth SetName|Description of SetName
    {"SetVersion", PyICreateTypeLib::SetVersion, 1},          // @pymeth SetVersion|Description of SetVersion
    {"SetGuid", PyICreateTypeLib::SetGuid, 1},                // @pymeth SetGuid|Description of SetGuid
    {"SetDocString", PyICreateTypeLib::SetDocString, 1},      // @pymeth SetDocString|Description of SetDocString
    {"SetHelpFileName", PyICreateTypeLib::SetHelpFileName,
     1},                                                      // @pymeth SetHelpFileName|Description of SetHelpFileName
    {"SetHelpContext", PyICreateTypeLib::SetHelpContext, 1},  // @pymeth SetHelpContext|Description of SetHelpContext
    {"SetLcid", PyICreateTypeLib::SetLcid, 1},                // @pymeth SetLcid|Description of SetLcid
    {"SetLibFlags", PyICreateTypeLib::SetLibFlags, 1},        // @pymeth SetLibFlags|Description of SetLibFlags
    {"SaveAllChanges", PyICreateTypeLib::SaveAllChanges, 1},  // @pymeth SaveAllChanges|Description of SaveAllChanges
    {NULL}};

PyComTypeObject PyICreateTypeLib::type("PyICreateTypeLib", &PyIUnknown::type, sizeof(PyICreateTypeLib),
                                       PyICreateTypeLib_methods, GET_PYCOM_CTOR(PyICreateTypeLib));
