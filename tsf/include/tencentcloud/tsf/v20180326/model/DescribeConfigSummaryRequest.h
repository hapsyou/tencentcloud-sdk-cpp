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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONFIGSUMMARYREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONFIGSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeConfigSummary请求参数结构体
                */
                class DescribeConfigSummaryRequest : public AbstractModel
                {
                public:
                    DescribeConfigSummaryRequest();
                    ~DescribeConfigSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，不传入时查询全量
                     * @return ApplicationId 应用ID，不传入时查询全量
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID，不传入时查询全量
                     * @param ApplicationId 应用ID，不传入时查询全量
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取查询关键字，模糊查询：应用名称，配置项名称，不传入时查询全量
                     * @return SearchWord 查询关键字，模糊查询：应用名称，配置项名称，不传入时查询全量
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置查询关键字，模糊查询：应用名称，配置项名称，不传入时查询全量
                     * @param SearchWord 查询关键字，模糊查询：应用名称，配置项名称，不传入时查询全量
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param Offset 偏移量，默认为0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条数，默认为20
                     * @return Limit 每页条数，默认为20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数，默认为20
                     * @param Limit 每页条数，默认为20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 应用ID，不传入时查询全量
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 查询关键字，模糊查询：应用名称，配置项名称，不传入时查询全量
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条数，默认为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONFIGSUMMARYREQUEST_H_
