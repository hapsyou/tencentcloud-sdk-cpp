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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_TRAFFICPACKAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_TRAFFICPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * CDN加速流量包。
                */
                class TrafficPackage : public AbstractModel
                {
                public:
                    TrafficPackage();
                    ~TrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量包 Id
                     * @return Id 流量包 Id
                     */
                    int64_t GetId() const;

                    /**
                     * 设置流量包 Id
                     * @param Id 流量包 Id
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取流量包类型
                     * @return Type 流量包类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置流量包类型
                     * @param Type 流量包类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取流量包大小（单位为 Byte）
                     * @return Bytes 流量包大小（单位为 Byte）
                     */
                    int64_t GetBytes() const;

                    /**
                     * 设置流量包大小（单位为 Byte）
                     * @param Bytes 流量包大小（单位为 Byte）
                     */
                    void SetBytes(const int64_t& _bytes);

                    /**
                     * 判断参数 Bytes 是否已赋值
                     * @return Bytes 是否已赋值
                     */
                    bool BytesHasBeenSet() const;

                    /**
                     * 获取已消耗流量（单位为 Byte）
                     * @return BytesUsed 已消耗流量（单位为 Byte）
                     */
                    int64_t GetBytesUsed() const;

                    /**
                     * 设置已消耗流量（单位为 Byte）
                     * @param BytesUsed 已消耗流量（单位为 Byte）
                     */
                    void SetBytesUsed(const int64_t& _bytesUsed);

                    /**
                     * 判断参数 BytesUsed 是否已赋值
                     * @return BytesUsed 是否已赋值
                     */
                    bool BytesUsedHasBeenSet() const;

                    /**
                     * 获取流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * @return Status 流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * @param Status 流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取流量包发放时间
                     * @return CreateTime 流量包发放时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置流量包发放时间
                     * @param CreateTime 流量包发放时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取流量包生效时间
                     * @return EnableTime 流量包生效时间
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置流量包生效时间
                     * @param EnableTime 流量包生效时间
                     */
                    void SetEnableTime(const std::string& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     */
                    bool EnableTimeHasBeenSet() const;

                    /**
                     * 获取流量包过期时间
                     * @return ExpireTime 流量包过期时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置流量包过期时间
                     * @param ExpireTime 流量包过期时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取流量包是否续订
                     * @return ContractExtension 流量包是否续订
                     */
                    bool GetContractExtension() const;

                    /**
                     * 设置流量包是否续订
                     * @param ContractExtension 流量包是否续订
                     */
                    void SetContractExtension(const bool& _contractExtension);

                    /**
                     * 判断参数 ContractExtension 是否已赋值
                     * @return ContractExtension 是否已赋值
                     */
                    bool ContractExtensionHasBeenSet() const;

                    /**
                     * 获取流量包是否自动续订
                     * @return AutoExtension 流量包是否自动续订
                     */
                    bool GetAutoExtension() const;

                    /**
                     * 设置流量包是否自动续订
                     * @param AutoExtension 流量包是否自动续订
                     */
                    void SetAutoExtension(const bool& _autoExtension);

                    /**
                     * 判断参数 AutoExtension 是否已赋值
                     * @return AutoExtension 是否已赋值
                     */
                    bool AutoExtensionHasBeenSet() const;

                    /**
                     * 获取流量包来源
                     * @return Channel 流量包来源
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置流量包来源
                     * @param Channel 流量包来源
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * 流量包 Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 流量包类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 流量包大小（单位为 Byte）
                     */
                    int64_t m_bytes;
                    bool m_bytesHasBeenSet;

                    /**
                     * 已消耗流量（单位为 Byte）
                     */
                    int64_t m_bytesUsed;
                    bool m_bytesUsedHasBeenSet;

                    /**
                     * 流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 流量包发放时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 流量包生效时间
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * 流量包过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 流量包是否续订
                     */
                    bool m_contractExtension;
                    bool m_contractExtensionHasBeenSet;

                    /**
                     * 流量包是否自动续订
                     */
                    bool m_autoExtension;
                    bool m_autoExtensionHasBeenSet;

                    /**
                     * 流量包来源
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_TRAFFICPACKAGE_H_