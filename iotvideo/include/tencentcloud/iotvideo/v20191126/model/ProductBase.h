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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_PRODUCTBASE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_PRODUCTBASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 产品信息摘要
                */
                class ProductBase : public AbstractModel
                {
                public:
                    ProductBase();
                    ~ProductBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param ProductId 产品ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取产器型号(APP产品,为APP包名)
                     * @return ProductModel 产器型号(APP产品,为APP包名)
                     */
                    std::string GetProductModel() const;

                    /**
                     * 设置产器型号(APP产品,为APP包名)
                     * @param ProductModel 产器型号(APP产品,为APP包名)
                     */
                    void SetProductModel(const std::string& _productModel);

                    /**
                     * 判断参数 ProductModel 是否已赋值
                     * @return ProductModel 是否已赋值
                     */
                    bool ProductModelHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param ProductName 产品名称
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品描述信息
                     * @return ProductDescription 产品描述信息
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置产品描述信息
                     * @param ProductDescription 产品描述信息
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     */
                    bool ProductDescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间，UNIX 时间戳，单位秒
                     * @return CreateTime 创建时间，UNIX 时间戳，单位秒
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，UNIX 时间戳，单位秒
                     * @param CreateTime 创建时间，UNIX 时间戳，单位秒
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取物模型发布版本号,0代表物模型尚未发布
                     * @return IotModelRevision 物模型发布版本号,0代表物模型尚未发布
                     */
                    uint64_t GetIotModelRevision() const;

                    /**
                     * 设置物模型发布版本号,0代表物模型尚未发布
                     * @param IotModelRevision 物模型发布版本号,0代表物模型尚未发布
                     */
                    void SetIotModelRevision(const uint64_t& _iotModelRevision);

                    /**
                     * 判断参数 IotModelRevision 是否已赋值
                     * @return IotModelRevision 是否已赋值
                     */
                    bool IotModelRevisionHasBeenSet() const;

                    /**
                     * 获取产品密钥
                     * @return SecretKey 产品密钥
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置产品密钥
                     * @param SecretKey 产品密钥
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产器型号(APP产品,为APP包名)
                     */
                    std::string m_productModel;
                    bool m_productModelHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品描述信息
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 创建时间，UNIX 时间戳，单位秒
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 物模型发布版本号,0代表物模型尚未发布
                     */
                    uint64_t m_iotModelRevision;
                    bool m_iotModelRevisionHasBeenSet;

                    /**
                     * 产品密钥
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_PRODUCTBASE_H_
