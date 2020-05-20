/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tcb/v20180608/TcbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcb::V20180608;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-08";
    const string ENDPOINT = "tcb.tencentcloudapi.com";
}

TcbClient::TcbClient(const Credential &credential, const string &region) :
    TcbClient(credential, region, ClientProfile())
{
}

TcbClient::TcbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcbClient::CheckTcbServiceOutcome TcbClient::CheckTcbService(const CheckTcbServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTcbService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTcbServiceResponse rsp = CheckTcbServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTcbServiceOutcome(rsp);
        else
            return CheckTcbServiceOutcome(o.GetError());
    }
    else
    {
        return CheckTcbServiceOutcome(outcome.GetError());
    }
}

void TcbClient::CheckTcbServiceAsync(const CheckTcbServiceRequest& request, const CheckTcbServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckTcbService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CheckTcbServiceOutcomeCallable TcbClient::CheckTcbServiceCallable(const CheckTcbServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckTcbServiceOutcome()>>(
        [this, request]()
        {
            return this->CheckTcbService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CommonServiceAPIOutcome TcbClient::CommonServiceAPI(const CommonServiceAPIRequest &request)
{
    auto outcome = MakeRequest(request, "CommonServiceAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommonServiceAPIResponse rsp = CommonServiceAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommonServiceAPIOutcome(rsp);
        else
            return CommonServiceAPIOutcome(o.GetError());
    }
    else
    {
        return CommonServiceAPIOutcome(outcome.GetError());
    }
}

void TcbClient::CommonServiceAPIAsync(const CommonServiceAPIRequest& request, const CommonServiceAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CommonServiceAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CommonServiceAPIOutcomeCallable TcbClient::CommonServiceAPICallable(const CommonServiceAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CommonServiceAPIOutcome()>>(
        [this, request]()
        {
            return this->CommonServiceAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateAuthDomainOutcome TcbClient::CreateAuthDomain(const CreateAuthDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuthDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuthDomainResponse rsp = CreateAuthDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuthDomainOutcome(rsp);
        else
            return CreateAuthDomainOutcome(o.GetError());
    }
    else
    {
        return CreateAuthDomainOutcome(outcome.GetError());
    }
}

void TcbClient::CreateAuthDomainAsync(const CreateAuthDomainRequest& request, const CreateAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuthDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateAuthDomainOutcomeCallable TcbClient::CreateAuthDomainCallable(const CreateAuthDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuthDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateAuthDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateHostingDomainOutcome TcbClient::CreateHostingDomain(const CreateHostingDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHostingDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostingDomainResponse rsp = CreateHostingDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostingDomainOutcome(rsp);
        else
            return CreateHostingDomainOutcome(o.GetError());
    }
    else
    {
        return CreateHostingDomainOutcome(outcome.GetError());
    }
}

void TcbClient::CreateHostingDomainAsync(const CreateHostingDomainRequest& request, const CreateHostingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHostingDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateHostingDomainOutcomeCallable TcbClient::CreateHostingDomainCallable(const CreateHostingDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHostingDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateHostingDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateStaticStoreOutcome TcbClient::CreateStaticStore(const CreateStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStaticStoreResponse rsp = CreateStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStaticStoreOutcome(rsp);
        else
            return CreateStaticStoreOutcome(o.GetError());
    }
    else
    {
        return CreateStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::CreateStaticStoreAsync(const CreateStaticStoreRequest& request, const CreateStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStaticStore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateStaticStoreOutcomeCallable TcbClient::CreateStaticStoreCallable(const CreateStaticStoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStaticStoreOutcome()>>(
        [this, request]()
        {
            return this->CreateStaticStore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DeleteEndUserOutcome TcbClient::DeleteEndUser(const DeleteEndUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEndUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEndUserResponse rsp = DeleteEndUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEndUserOutcome(rsp);
        else
            return DeleteEndUserOutcome(o.GetError());
    }
    else
    {
        return DeleteEndUserOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteEndUserAsync(const DeleteEndUserRequest& request, const DeleteEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEndUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DeleteEndUserOutcomeCallable TcbClient::DeleteEndUserCallable(const DeleteEndUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEndUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteEndUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeAuthDomainsOutcome TcbClient::DescribeAuthDomains(const DescribeAuthDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthDomainsResponse rsp = DescribeAuthDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthDomainsOutcome(rsp);
        else
            return DescribeAuthDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthDomainsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeAuthDomainsAsync(const DescribeAuthDomainsRequest& request, const DescribeAuthDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuthDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeAuthDomainsOutcomeCallable TcbClient::DescribeAuthDomainsCallable(const DescribeAuthDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuthDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuthDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeDatabaseACLOutcome TcbClient::DescribeDatabaseACL(const DescribeDatabaseACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseACLResponse rsp = DescribeDatabaseACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseACLOutcome(rsp);
        else
            return DescribeDatabaseACLOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseACLOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeDatabaseACLAsync(const DescribeDatabaseACLRequest& request, const DescribeDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeDatabaseACLOutcomeCallable TcbClient::DescribeDatabaseACLCallable(const DescribeDatabaseACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseACLOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEndUserLoginStatisticOutcome TcbClient::DescribeEndUserLoginStatistic(const DescribeEndUserLoginStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndUserLoginStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndUserLoginStatisticResponse rsp = DescribeEndUserLoginStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndUserLoginStatisticOutcome(rsp);
        else
            return DescribeEndUserLoginStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeEndUserLoginStatisticOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEndUserLoginStatisticAsync(const DescribeEndUserLoginStatisticRequest& request, const DescribeEndUserLoginStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEndUserLoginStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEndUserLoginStatisticOutcomeCallable TcbClient::DescribeEndUserLoginStatisticCallable(const DescribeEndUserLoginStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEndUserLoginStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeEndUserLoginStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEndUserStatisticOutcome TcbClient::DescribeEndUserStatistic(const DescribeEndUserStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndUserStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndUserStatisticResponse rsp = DescribeEndUserStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndUserStatisticOutcome(rsp);
        else
            return DescribeEndUserStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeEndUserStatisticOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEndUserStatisticAsync(const DescribeEndUserStatisticRequest& request, const DescribeEndUserStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEndUserStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEndUserStatisticOutcomeCallable TcbClient::DescribeEndUserStatisticCallable(const DescribeEndUserStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEndUserStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeEndUserStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEndUsersOutcome TcbClient::DescribeEndUsers(const DescribeEndUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndUsersResponse rsp = DescribeEndUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndUsersOutcome(rsp);
        else
            return DescribeEndUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeEndUsersOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEndUsersAsync(const DescribeEndUsersRequest& request, const DescribeEndUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEndUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEndUsersOutcomeCallable TcbClient::DescribeEndUsersCallable(const DescribeEndUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEndUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeEndUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEnvFreeQuotaOutcome TcbClient::DescribeEnvFreeQuota(const DescribeEnvFreeQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvFreeQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvFreeQuotaResponse rsp = DescribeEnvFreeQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvFreeQuotaOutcome(rsp);
        else
            return DescribeEnvFreeQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvFreeQuotaOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvFreeQuotaAsync(const DescribeEnvFreeQuotaRequest& request, const DescribeEnvFreeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvFreeQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEnvFreeQuotaOutcomeCallable TcbClient::DescribeEnvFreeQuotaCallable(const DescribeEnvFreeQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvFreeQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvFreeQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEnvLimitOutcome TcbClient::DescribeEnvLimit(const DescribeEnvLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvLimitResponse rsp = DescribeEnvLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvLimitOutcome(rsp);
        else
            return DescribeEnvLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvLimitOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvLimitAsync(const DescribeEnvLimitRequest& request, const DescribeEnvLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEnvLimitOutcomeCallable TcbClient::DescribeEnvLimitCallable(const DescribeEnvLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEnvsOutcome TcbClient::DescribeEnvs(const DescribeEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvsResponse rsp = DescribeEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvsOutcome(rsp);
        else
            return DescribeEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvsAsync(const DescribeEnvsRequest& request, const DescribeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEnvsOutcomeCallable TcbClient::DescribeEnvsCallable(const DescribeEnvsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeExtraPkgBillingInfoOutcome TcbClient::DescribeExtraPkgBillingInfo(const DescribeExtraPkgBillingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtraPkgBillingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtraPkgBillingInfoResponse rsp = DescribeExtraPkgBillingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtraPkgBillingInfoOutcome(rsp);
        else
            return DescribeExtraPkgBillingInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeExtraPkgBillingInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeExtraPkgBillingInfoAsync(const DescribeExtraPkgBillingInfoRequest& request, const DescribeExtraPkgBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtraPkgBillingInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeExtraPkgBillingInfoOutcomeCallable TcbClient::DescribeExtraPkgBillingInfoCallable(const DescribeExtraPkgBillingInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtraPkgBillingInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtraPkgBillingInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeQuotaDataOutcome TcbClient::DescribeQuotaData(const DescribeQuotaDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaDataResponse rsp = DescribeQuotaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaDataOutcome(rsp);
        else
            return DescribeQuotaDataOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeQuotaDataAsync(const DescribeQuotaDataRequest& request, const DescribeQuotaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQuotaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeQuotaDataOutcomeCallable TcbClient::DescribeQuotaDataCallable(const DescribeQuotaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQuotaDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeQuotaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DestroyEnvOutcome TcbClient::DestroyEnv(const DestroyEnvRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyEnvResponse rsp = DestroyEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyEnvOutcome(rsp);
        else
            return DestroyEnvOutcome(o.GetError());
    }
    else
    {
        return DestroyEnvOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyEnvAsync(const DestroyEnvRequest& request, const DestroyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DestroyEnvOutcomeCallable TcbClient::DestroyEnvCallable(const DestroyEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyEnvOutcome()>>(
        [this, request]()
        {
            return this->DestroyEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DestroyStaticStoreOutcome TcbClient::DestroyStaticStore(const DestroyStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyStaticStoreResponse rsp = DestroyStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyStaticStoreOutcome(rsp);
        else
            return DestroyStaticStoreOutcome(o.GetError());
    }
    else
    {
        return DestroyStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyStaticStoreAsync(const DestroyStaticStoreRequest& request, const DestroyStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyStaticStore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DestroyStaticStoreOutcomeCallable TcbClient::DestroyStaticStoreCallable(const DestroyStaticStoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyStaticStoreOutcome()>>(
        [this, request]()
        {
            return this->DestroyStaticStore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ModifyDatabaseACLOutcome TcbClient::ModifyDatabaseACL(const ModifyDatabaseACLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseACLResponse rsp = ModifyDatabaseACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseACLOutcome(rsp);
        else
            return ModifyDatabaseACLOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseACLOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyDatabaseACLAsync(const ModifyDatabaseACLRequest& request, const ModifyDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabaseACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyDatabaseACLOutcomeCallable TcbClient::ModifyDatabaseACLCallable(const ModifyDatabaseACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabaseACLOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabaseACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ModifyEnvOutcome TcbClient::ModifyEnv(const ModifyEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvResponse rsp = ModifyEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvOutcome(rsp);
        else
            return ModifyEnvOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyEnvAsync(const ModifyEnvRequest& request, const ModifyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyEnvOutcomeCallable TcbClient::ModifyEnvCallable(const ModifyEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnvOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ReinstateEnvOutcome TcbClient::ReinstateEnv(const ReinstateEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ReinstateEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReinstateEnvResponse rsp = ReinstateEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReinstateEnvOutcome(rsp);
        else
            return ReinstateEnvOutcome(o.GetError());
    }
    else
    {
        return ReinstateEnvOutcome(outcome.GetError());
    }
}

void TcbClient::ReinstateEnvAsync(const ReinstateEnvRequest& request, const ReinstateEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReinstateEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ReinstateEnvOutcomeCallable TcbClient::ReinstateEnvCallable(const ReinstateEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReinstateEnvOutcome()>>(
        [this, request]()
        {
            return this->ReinstateEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

