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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEHEALTH_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * L7规则健康检查参数
                */
                class L7RuleHealth : public AbstractModel
                {
                public:
                    L7RuleHealth();
                    ~L7RuleHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param RuleId 规则ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取=1表示开启；=0表示关闭
                     * @return Enable =1表示开启；=0表示关闭
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置=1表示开启；=0表示关闭
                     * @param Enable =1表示开启；=0表示关闭
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取检测间隔时间，单位秒
                     * @return Interval 检测间隔时间，单位秒
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置检测间隔时间，单位秒
                     * @param Interval 检测间隔时间，单位秒
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取不健康阈值，单位次
                     * @return KickNum 不健康阈值，单位次
                     */
                    uint64_t GetKickNum() const;

                    /**
                     * 设置不健康阈值，单位次
                     * @param KickNum 不健康阈值，单位次
                     */
                    void SetKickNum(const uint64_t& _kickNum);

                    /**
                     * 判断参数 KickNum 是否已赋值
                     * @return KickNum 是否已赋值
                     */
                    bool KickNumHasBeenSet() const;

                    /**
                     * 获取健康阈值，单位次
                     * @return AliveNum 健康阈值，单位次
                     */
                    uint64_t GetAliveNum() const;

                    /**
                     * 设置健康阈值，单位次
                     * @param AliveNum 健康阈值，单位次
                     */
                    void SetAliveNum(const uint64_t& _aliveNum);

                    /**
                     * 判断参数 AliveNum 是否已赋值
                     * @return AliveNum 是否已赋值
                     */
                    bool AliveNumHasBeenSet() const;

                    /**
                     * 获取HTTP请求方式，取值[HEAD,GET]
                     * @return Method HTTP请求方式，取值[HEAD,GET]
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置HTTP请求方式，取值[HEAD,GET]
                     * @param Method HTTP请求方式，取值[HEAD,GET]
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取健康检查判定正常状态码，1xx =1, 2xx=2, 3xx=4, 4xx=8,5xx=16，多个状态码值加和
                     * @return StatusCode 健康检查判定正常状态码，1xx =1, 2xx=2, 3xx=4, 4xx=8,5xx=16，多个状态码值加和
                     */
                    uint64_t GetStatusCode() const;

                    /**
                     * 设置健康检查判定正常状态码，1xx =1, 2xx=2, 3xx=4, 4xx=8,5xx=16，多个状态码值加和
                     * @param StatusCode 健康检查判定正常状态码，1xx =1, 2xx=2, 3xx=4, 4xx=8,5xx=16，多个状态码值加和
                     */
                    void SetStatusCode(const uint64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取检查目录的URL，默认为/
                     * @return Url 检查目录的URL，默认为/
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置检查目录的URL，默认为/
                     * @param Url 检查目录的URL，默认为/
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取配置状态，0： 正常，1：配置中，2：配置失败
                     * @return Status 配置状态，0： 正常，1：配置中，2：配置失败
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置配置状态，0： 正常，1：配置中，2：配置失败
                     * @param Status 配置状态，0： 正常，1：配置中，2：配置失败
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * =1表示开启；=0表示关闭
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 检测间隔时间，单位秒
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 不健康阈值，单位次
                     */
                    uint64_t m_kickNum;
                    bool m_kickNumHasBeenSet;

                    /**
                     * 健康阈值，单位次
                     */
                    uint64_t m_aliveNum;
                    bool m_aliveNumHasBeenSet;

                    /**
                     * HTTP请求方式，取值[HEAD,GET]
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 健康检查判定正常状态码，1xx =1, 2xx=2, 3xx=4, 4xx=8,5xx=16，多个状态码值加和
                     */
                    uint64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 检查目录的URL，默认为/
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 配置状态，0： 正常，1：配置中，2：配置失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEHEALTH_H_
