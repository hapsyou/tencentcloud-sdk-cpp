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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_SPONSORINFO_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_SPONSORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * 助力场景信息
                */
                class SponsorInfo : public AbstractModel
                {
                public:
                    SponsorInfo();
                    ~SponsorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取助力场景建议填写：活动发起人微信OpenID。
                     * @return SponsorOpenId 助力场景建议填写：活动发起人微信OpenID。
                     */
                    std::string GetSponsorOpenId() const;

                    /**
                     * 设置助力场景建议填写：活动发起人微信OpenID。
                     * @param SponsorOpenId 助力场景建议填写：活动发起人微信OpenID。
                     */
                    void SetSponsorOpenId(const std::string& _sponsorOpenId);

                    /**
                     * 判断参数 SponsorOpenId 是否已赋值
                     * @return SponsorOpenId 是否已赋值
                     */
                    bool SponsorOpenIdHasBeenSet() const;

                    /**
                     * 获取助力场景建议填写：发起人设备号。
                     * @return SponsorDeviceId 助力场景建议填写：发起人设备号。
                     */
                    std::string GetSponsorDeviceId() const;

                    /**
                     * 设置助力场景建议填写：发起人设备号。
                     * @param SponsorDeviceId 助力场景建议填写：发起人设备号。
                     */
                    void SetSponsorDeviceId(const std::string& _sponsorDeviceId);

                    /**
                     * 判断参数 SponsorDeviceId 是否已赋值
                     * @return SponsorDeviceId 是否已赋值
                     */
                    bool SponsorDeviceIdHasBeenSet() const;

                    /**
                     * 获取助力场景建议填写：发起人手机号。
                     * @return SponsorPhone 助力场景建议填写：发起人手机号。
                     */
                    std::string GetSponsorPhone() const;

                    /**
                     * 设置助力场景建议填写：发起人手机号。
                     * @param SponsorPhone 助力场景建议填写：发起人手机号。
                     */
                    void SetSponsorPhone(const std::string& _sponsorPhone);

                    /**
                     * 判断参数 SponsorPhone 是否已赋值
                     * @return SponsorPhone 是否已赋值
                     */
                    bool SponsorPhoneHasBeenSet() const;

                    /**
                     * 获取助力场景建议填写：发起人IP。
                     * @return SponsorIp 助力场景建议填写：发起人IP。
                     */
                    std::string GetSponsorIp() const;

                    /**
                     * 设置助力场景建议填写：发起人IP。
                     * @param SponsorIp 助力场景建议填写：发起人IP。
                     */
                    void SetSponsorIp(const std::string& _sponsorIp);

                    /**
                     * 判断参数 SponsorIp 是否已赋值
                     * @return SponsorIp 是否已赋值
                     */
                    bool SponsorIpHasBeenSet() const;

                    /**
                     * 获取助力场景建议填写：活动链接。
                     * @return CampaignUrl 助力场景建议填写：活动链接。
                     */
                    std::string GetCampaignUrl() const;

                    /**
                     * 设置助力场景建议填写：活动链接。
                     * @param CampaignUrl 助力场景建议填写：活动链接。
                     */
                    void SetCampaignUrl(const std::string& _campaignUrl);

                    /**
                     * 判断参数 CampaignUrl 是否已赋值
                     * @return CampaignUrl 是否已赋值
                     */
                    bool CampaignUrlHasBeenSet() const;

                private:

                    /**
                     * 助力场景建议填写：活动发起人微信OpenID。
                     */
                    std::string m_sponsorOpenId;
                    bool m_sponsorOpenIdHasBeenSet;

                    /**
                     * 助力场景建议填写：发起人设备号。
                     */
                    std::string m_sponsorDeviceId;
                    bool m_sponsorDeviceIdHasBeenSet;

                    /**
                     * 助力场景建议填写：发起人手机号。
                     */
                    std::string m_sponsorPhone;
                    bool m_sponsorPhoneHasBeenSet;

                    /**
                     * 助力场景建议填写：发起人IP。
                     */
                    std::string m_sponsorIp;
                    bool m_sponsorIpHasBeenSet;

                    /**
                     * 助力场景建议填写：活动链接。
                     */
                    std::string m_campaignUrl;
                    bool m_campaignUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_SPONSORINFO_H_
