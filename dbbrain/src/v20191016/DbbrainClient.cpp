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

#include <tencentcloud/dbbrain/v20191016/DbbrainClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dbbrain::V20191016;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-16";
    const string ENDPOINT = "dbbrain.tencentcloudapi.com";
}

DbbrainClient::DbbrainClient(const Credential &credential, const string &region) :
    DbbrainClient(credential, region, ClientProfile())
{
}

DbbrainClient::DbbrainClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DbbrainClient::DescribeDBDiagEventOutcome DbbrainClient::DescribeDBDiagEvent(const DescribeDBDiagEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagEventResponse rsp = DescribeDBDiagEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagEventOutcome(rsp);
        else
            return DescribeDBDiagEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagEventOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagEventAsync(const DescribeDBDiagEventRequest& request, const DescribeDBDiagEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagEventOutcomeCallable DbbrainClient::DescribeDBDiagEventCallable(const DescribeDBDiagEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagHistoryOutcome DbbrainClient::DescribeDBDiagHistory(const DescribeDBDiagHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagHistoryResponse rsp = DescribeDBDiagHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagHistoryOutcome(rsp);
        else
            return DescribeDBDiagHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagHistoryOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagHistoryAsync(const DescribeDBDiagHistoryRequest& request, const DescribeDBDiagHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagHistoryOutcomeCallable DbbrainClient::DescribeDBDiagHistoryCallable(const DescribeDBDiagHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBSpaceStatusOutcome DbbrainClient::DescribeDBSpaceStatus(const DescribeDBSpaceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSpaceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSpaceStatusResponse rsp = DescribeDBSpaceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSpaceStatusOutcome(rsp);
        else
            return DescribeDBSpaceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSpaceStatusOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBSpaceStatusAsync(const DescribeDBSpaceStatusRequest& request, const DescribeDBSpaceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSpaceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBSpaceStatusOutcomeCallable DbbrainClient::DescribeDBSpaceStatusCallable(const DescribeDBSpaceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSpaceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSpaceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogTimeSeriesStatsOutcome DbbrainClient::DescribeSlowLogTimeSeriesStats(const DescribeSlowLogTimeSeriesStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogTimeSeriesStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogTimeSeriesStatsResponse rsp = DescribeSlowLogTimeSeriesStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogTimeSeriesStatsOutcome(rsp);
        else
            return DescribeSlowLogTimeSeriesStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogTimeSeriesStatsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogTimeSeriesStatsAsync(const DescribeSlowLogTimeSeriesStatsRequest& request, const DescribeSlowLogTimeSeriesStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogTimeSeriesStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogTimeSeriesStatsOutcomeCallable DbbrainClient::DescribeSlowLogTimeSeriesStatsCallable(const DescribeSlowLogTimeSeriesStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogTimeSeriesStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogTimeSeriesStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogTopSqlsOutcome DbbrainClient::DescribeSlowLogTopSqls(const DescribeSlowLogTopSqlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogTopSqls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogTopSqlsResponse rsp = DescribeSlowLogTopSqlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogTopSqlsOutcome(rsp);
        else
            return DescribeSlowLogTopSqlsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogTopSqlsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogTopSqlsAsync(const DescribeSlowLogTopSqlsRequest& request, const DescribeSlowLogTopSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogTopSqls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogTopSqlsOutcomeCallable DbbrainClient::DescribeSlowLogTopSqlsCallable(const DescribeSlowLogTopSqlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogTopSqlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogTopSqls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceTableTimeSeriesOutcome DbbrainClient::DescribeTopSpaceTableTimeSeries(const DescribeTopSpaceTableTimeSeriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceTableTimeSeries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceTableTimeSeriesResponse rsp = DescribeTopSpaceTableTimeSeriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceTableTimeSeriesOutcome(rsp);
        else
            return DescribeTopSpaceTableTimeSeriesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceTableTimeSeriesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceTableTimeSeriesAsync(const DescribeTopSpaceTableTimeSeriesRequest& request, const DescribeTopSpaceTableTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceTableTimeSeries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceTableTimeSeriesOutcomeCallable DbbrainClient::DescribeTopSpaceTableTimeSeriesCallable(const DescribeTopSpaceTableTimeSeriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceTableTimeSeriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceTableTimeSeries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceTablesOutcome DbbrainClient::DescribeTopSpaceTables(const DescribeTopSpaceTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceTablesResponse rsp = DescribeTopSpaceTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceTablesOutcome(rsp);
        else
            return DescribeTopSpaceTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceTablesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceTablesAsync(const DescribeTopSpaceTablesRequest& request, const DescribeTopSpaceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceTablesOutcomeCallable DbbrainClient::DescribeTopSpaceTablesCallable(const DescribeTopSpaceTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

