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

#include <tencentcloud/mps/v20190612/model/MediaContentReviewAsrTextSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

MediaContentReviewAsrTextSegmentItem::MediaContentReviewAsrTextSegmentItem() :
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_keywordSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaContentReviewAsrTextSegmentItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewAsrTextSegmentItem.StartTimeOffset` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewAsrTextSegmentItem.EndTimeOffset` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewAsrTextSegmentItem.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewAsrTextSegmentItem.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("KeywordSet") && !value["KeywordSet"].IsNull())
    {
        if (!value["KeywordSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaContentReviewAsrTextSegmentItem.KeywordSet` is not array type"));

        const Value &tmpValue = value["KeywordSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywordSet.push_back((*itr).GetString());
        }
        m_keywordSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaContentReviewAsrTextSegmentItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_startTimeOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeywordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywordSet.begin(); itr != m_keywordSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


double MediaContentReviewAsrTextSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void MediaContentReviewAsrTextSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool MediaContentReviewAsrTextSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double MediaContentReviewAsrTextSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void MediaContentReviewAsrTextSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool MediaContentReviewAsrTextSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

double MediaContentReviewAsrTextSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void MediaContentReviewAsrTextSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaContentReviewAsrTextSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string MediaContentReviewAsrTextSegmentItem::GetSuggestion() const
{
    return m_suggestion;
}

void MediaContentReviewAsrTextSegmentItem::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool MediaContentReviewAsrTextSegmentItem::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

vector<string> MediaContentReviewAsrTextSegmentItem::GetKeywordSet() const
{
    return m_keywordSet;
}

void MediaContentReviewAsrTextSegmentItem::SetKeywordSet(const vector<string>& _keywordSet)
{
    m_keywordSet = _keywordSet;
    m_keywordSetHasBeenSet = true;
}

bool MediaContentReviewAsrTextSegmentItem::KeywordSetHasBeenSet() const
{
    return m_keywordSetHasBeenSet;
}

