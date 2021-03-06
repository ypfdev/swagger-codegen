/**
 * Swagger Petstore *_/ ' \" =end -- \\r\\n \\n \\r
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\  *_/ ' \" =end --       
 *
 * OpenAPI spec version: 1.0.0 *_/ ' \" =end -- \\r\\n \\n \\r
 * Contact: apiteam@swagger.io *_/ ' \" =end -- \\r\\n \\n \\r
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */
#pragma once

#include "SwaggerBaseModel.h"
#include "SwaggerFakeApi.h"


namespace Swagger 
{

/* To test code injection *_/ &#39; \&quot; &#x3D;end -- \\r\\n \\n \\r

*/
class SWAGGER_API SwaggerFakeApi::TestCodeInjectEndRnNRRequest : public Request
{
public:
    virtual ~TestCodeInjectEndRnNRRequest() {}
	void SetupHttpRequest(const TSharedRef<IHttpRequest>& HttpRequest) const final;
	FString ComputePath() const final;
    
	/* To test code injection *_/ ' \" =end -- \\r\\n \\n \\r */
	TOptional<FString> TestCodeInjectEndRnNR;
};

class SWAGGER_API SwaggerFakeApi::TestCodeInjectEndRnNRResponse : public Response
{
public:
    virtual ~TestCodeInjectEndRnNRResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonObject) final;
    
    
};

}
