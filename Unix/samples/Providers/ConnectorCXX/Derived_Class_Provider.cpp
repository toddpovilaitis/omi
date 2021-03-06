/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

/* @migen@ */
#include <MI.h>
#include "Derived_Class_Provider.h"

MI_BEGIN_NAMESPACE

Derived_Class_Provider::Derived_Class_Provider(
    Module* module) :
    m_Module(module)
{
}

Derived_Class_Provider::~Derived_Class_Provider()
{
}

void Derived_Class_Provider::EnumerateInstances(
    Context& context,
    const String& nameSpace,
    const PropertySet& propertySet,
    bool keysOnly,
    const MI_Filter* filter)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Derived_Class_Provider::GetInstance(
    Context& context,
    const String& nameSpace,
    const Derived_Class& instanceName,
    const PropertySet& propertySet)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Derived_Class_Provider::CreateInstance(
    Context& context,
    const String& nameSpace,
    const Derived_Class& newInstance)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Derived_Class_Provider::ModifyInstance(
    Context& context,
    const String& nameSpace,
    const Derived_Class& modifiedInstance,
    const PropertySet& propertySet)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Derived_Class_Provider::DeleteInstance(
    Context& context,
    const String& nameSpace,
    const Derived_Class& instanceName)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Derived_Class_Provider::Invoke_Foo(
    Context& context,
    const String& nameSpace,
    const Derived_Class& instance,
    const Derived_Foo_Class& in)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}


MI_END_NAMESPACE
MI_BEGIN_NAMESPACE
void Derived_Class_Provider::Load(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

void Derived_Class_Provider::Unload(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

MI_END_NAMESPACE
