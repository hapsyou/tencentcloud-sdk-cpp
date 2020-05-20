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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEEXTRAPKGBILLINGINFORESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEEXTRAPKGBILLINGINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/EnvBillingInfoItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeExtraPkgBillingInfo返回参数结构体
                */
                class DescribeExtraPkgBillingInfoResponse : public AbstractModel
                {
                public:
                    DescribeExtraPkgBillingInfoResponse();
                    ~DescribeExtraPkgBillingInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取增值包计费信息列表
                     * @return EnvInfoList 增值包计费信息列表
                     */
                    std::vector<EnvBillingInfoItem> GetEnvInfoList() const;

                    /**
                     * 判断参数 EnvInfoList 是否已赋值
                     * @return EnvInfoList 是否已赋值
                     */
                    bool EnvInfoListHasBeenSet() const;

                    /**
                     * 获取增值包数目
                     * @return Total 增值包数目
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 增值包计费信息列表
                     */
                    std::vector<EnvBillingInfoItem> m_envInfoList;
                    bool m_envInfoListHasBeenSet;

                    /**
                     * 增值包数目
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEEXTRAPKGBILLINGINFORESPONSE_H_
