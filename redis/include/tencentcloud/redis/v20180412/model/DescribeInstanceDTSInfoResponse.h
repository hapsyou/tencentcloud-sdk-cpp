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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINFORESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceDTSInstanceInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceDTSInfo返回参数结构体
                */
                class DescribeInstanceDTSInfoResponse : public AbstractModel
                {
                public:
                    DescribeInstanceDTSInfoResponse();
                    ~DescribeInstanceDTSInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取DTS任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId DTS任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取DTS任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobName DTS任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobName() const;

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取同步时延，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 同步时延，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取断开时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CutDownTime 断开时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCutDownTime() const;

                    /**
                     * 判断参数 CutDownTime 是否已赋值
                     * @return CutDownTime 是否已赋值
                     */
                    bool CutDownTimeHasBeenSet() const;

                    /**
                     * 获取源实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcInfo 源实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInstanceDTSInstanceInfo GetSrcInfo() const;

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstInfo 目标实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInstanceDTSInstanceInfo GetDstInfo() const;

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                private:

                    /**
                     * DTS任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * DTS任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 同步时延，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 断开时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cutDownTime;
                    bool m_cutDownTimeHasBeenSet;

                    /**
                     * 源实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInstanceDTSInstanceInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInstanceDTSInstanceInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINFORESPONSE_H_
