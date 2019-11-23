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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESRESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cws/v20180312/model/MiniSite.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * CreateSites返回参数结构体
                */
                class CreateSitesResponse : public AbstractModel
                {
                public:
                    CreateSitesResponse();
                    ~CreateSitesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取新增站点数。
                     * @return Number 新增站点数。
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取站点数组
                     * @return Sites 站点数组
                     */
                    std::vector<MiniSite> GetSites() const;

                    /**
                     * 判断参数 Sites 是否已赋值
                     * @return Sites 是否已赋值
                     */
                    bool SitesHasBeenSet() const;

                private:

                    /**
                     * 新增站点数。
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 站点数组
                     */
                    std::vector<MiniSite> m_sites;
                    bool m_sitesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESRESPONSE_H_
