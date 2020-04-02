/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * The version of the OpenAPI document: 1.113
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "BTPStatementAssignment_270_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPStatementAssignment_270_allOf::BTPStatementAssignment_270_allOf()
{
    m_r_operator = utility::conversions::to_string_t("");
    m_r_operatorIsSet = false;
    m_LvalueIsSet = false;
    m_RvalueIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPStatementAssignment_270_allOf::~BTPStatementAssignment_270_allOf()
{
}

void BTPStatementAssignment_270_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPStatementAssignment_270_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_r_operatorIsSet)
    {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(m_r_operator);
    }
    if(m_LvalueIsSet)
    {
        val[utility::conversions::to_string_t("lvalue")] = ModelBase::toJson(m_Lvalue);
    }
    if(m_RvalueIsSet)
    {
        val[utility::conversions::to_string_t("rvalue")] = ModelBase::toJson(m_Rvalue);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPStatementAssignment_270_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operator")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_operator;
            ok &= ModelBase::fromJson(fieldValue, refVal_operator);
            setROperator(refVal_operator);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lvalue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lvalue"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPLValue_249> refVal_lvalue;
            ok &= ModelBase::fromJson(fieldValue, refVal_lvalue);
            setLvalue(refVal_lvalue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rvalue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rvalue"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPExpression_9> refVal_rvalue;
            ok &= ModelBase::fromJson(fieldValue, refVal_rvalue);
            setRvalue(refVal_rvalue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTPStatementAssignment_270_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_r_operatorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("operator"), m_r_operator));
    }
    if(m_LvalueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lvalue"), m_Lvalue));
    }
    if(m_RvalueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rvalue"), m_Rvalue));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPStatementAssignment_270_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("operator")))
    {
        utility::string_t refVal_operator;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("operator")), refVal_operator );
        setROperator(refVal_operator);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lvalue")))
    {
        std::shared_ptr<BTPLValue_249> refVal_lvalue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lvalue")), refVal_lvalue );
        setLvalue(refVal_lvalue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rvalue")))
    {
        std::shared_ptr<BTPExpression_9> refVal_rvalue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rvalue")), refVal_rvalue );
        setRvalue(refVal_rvalue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTPStatementAssignment_270_allOf::getROperator() const
{
    return m_r_operator;
}

void BTPStatementAssignment_270_allOf::setROperator(const utility::string_t& value)
{
    m_r_operator = value;
    m_r_operatorIsSet = true;
}

bool BTPStatementAssignment_270_allOf::rOperatorIsSet() const
{
    return m_r_operatorIsSet;
}

void BTPStatementAssignment_270_allOf::unsetr_operator()
{
    m_r_operatorIsSet = false;
}
std::shared_ptr<BTPLValue_249> BTPStatementAssignment_270_allOf::getLvalue() const
{
    return m_Lvalue;
}

void BTPStatementAssignment_270_allOf::setLvalue(const std::shared_ptr<BTPLValue_249>& value)
{
    m_Lvalue = value;
    m_LvalueIsSet = true;
}

bool BTPStatementAssignment_270_allOf::lvalueIsSet() const
{
    return m_LvalueIsSet;
}

void BTPStatementAssignment_270_allOf::unsetLvalue()
{
    m_LvalueIsSet = false;
}
std::shared_ptr<BTPExpression_9> BTPStatementAssignment_270_allOf::getRvalue() const
{
    return m_Rvalue;
}

void BTPStatementAssignment_270_allOf::setRvalue(const std::shared_ptr<BTPExpression_9>& value)
{
    m_Rvalue = value;
    m_RvalueIsSet = true;
}

bool BTPStatementAssignment_270_allOf::rvalueIsSet() const
{
    return m_RvalueIsSet;
}

void BTPStatementAssignment_270_allOf::unsetRvalue()
{
    m_RvalueIsSet = false;
}
utility::string_t BTPStatementAssignment_270_allOf::getBtType() const
{
    return m_BtType;
}

void BTPStatementAssignment_270_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPStatementAssignment_270_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPStatementAssignment_270_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

