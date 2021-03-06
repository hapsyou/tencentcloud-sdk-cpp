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

#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisFrameTagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

MediaAiAnalysisFrameTagItem::MediaAiAnalysisFrameTagItem() :
    m_tagHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome MediaAiAnalysisFrameTagItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaAiAnalysisFrameTagItem.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaAiAnalysisFrameTagItem.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAiAnalysisFrameTagItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


string MediaAiAnalysisFrameTagItem::GetTag() const
{
    return m_tag;
}

void MediaAiAnalysisFrameTagItem::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool MediaAiAnalysisFrameTagItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

double MediaAiAnalysisFrameTagItem::GetConfidence() const
{
    return m_confidence;
}

void MediaAiAnalysisFrameTagItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaAiAnalysisFrameTagItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

