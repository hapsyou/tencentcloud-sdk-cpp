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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeIpStatus请求参数结构体
                */
                class DescribeIpStatusRequest : public AbstractModel
                {
                public:
                    DescribeIpStatusRequest();
                    ~DescribeIpStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名
                     * @return Domain 加速域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置加速域名
                     * @param Domain 加速域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     * @return Layer 节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     * @param Layer 节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     */
                    bool LayerHasBeenSet() const;

                private:

                    /**
                     * 加速域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_
