//
//  JSONCore.h
//  COJSONCore
//
//  Created by odyang on 16/12/6.
//  Copyright © 2016年 maintoco. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 JSON转换类
 */
@interface JSONCore : NSObject

+ (instancetype)objectFromJSONString:(NSString *)jsonString;
+ (instancetype)objectFromDictionary:(NSDictionary *)dict;
+ (NSArray *)arrayOfModelsFromDictionaries:(NSArray *)array;


/**
 key关联字段

 @return key:对象属性 value:keyPath
 */
- (NSDictionary *)keyMappingDictionary;


/**
 类型关联字典

 @return key:对象属性   value:类型class
 */
- (NSDictionary *)typeMappingDictionary;

- (NSDictionary *)toDictionary;
- (NSString *)toJSONString;

@end