//
//  AAICThreadSafeArray.h
//  AAILivenessSDK
//
//  Created by advance on 2023/12/13.
//  Copyright © 2023 Advance.ai. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
__attribute__((visibility("default")))
@interface AAICThreadSafeArray : NSObject

- (NSInteger)length;
- (void)push:(id)object;
- (id _Nullable)pop;
- (id _Nullable)front;
- (id _Nullable)last;
- (NSArray*)copyArray;
- (void)clear;

@end

__attribute__((visibility("default")))
@interface AAICThreadSafeDict : NSObject

- (NSInteger)count;
- (void)put:(id)object forKey:(NSString *)key;
- (void)putEntriesFromDict:(NSDictionary *)dict;
- (void)removeObjectForKeys:(NSArray<NSString *> *)keys;
- (void)removeObjectForKey:(NSString *)key;
- (id _Nullable)getObjectForKey:(NSString *)key;
- (NSArray<NSString *> *)allKeys;
- (NSDictionary*)copyDict;
- (void)clear;

@end

__attribute__((visibility("default")))
@interface AAICThreadSafeSet : NSObject

- (NSInteger)count;
- (void)addObject:(id)object;
- (void)removeObject:(id)object;
- (void)removeObjects:(NSArray *)objectList;
- (BOOL)containsObject:(id)object;
- (BOOL)addObjectIfNotExist:(id)object;

@end
NS_ASSUME_NONNULL_END
