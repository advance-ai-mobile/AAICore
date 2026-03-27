//
//  AAICEventProtocol.h
//  AAILivenessSDK
//
//  Created by advance on 2024/8/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AAICWritableData<NSObject>

- (NSData *)content;

- (NSInteger)contentFlags;

- (id _Nullable)contentJsonObj;

- (NSDictionary* _Nullable)configs;

@end

@protocol AAICDataHandler <NSObject>

- (void)handleData:(id<AAICWritableData>)data;

@end

@protocol AAICDataProvider <NSObject>

- (void)setDataHandler:(id<AAICDataHandler>)dataHandler;
- (id<AAICDataHandler> _Nullable)dataHandler;

@end

@protocol AAICFileStorage<NSObject>

@property(nonatomic, readonly, nullable) dispatch_queue_t storageQueue;
@property(nonatomic, readonly) NSString *fileDirectory;

- (NSString *)fileNameForData:(id<AAICWritableData>)data splitIndex:(NSInteger)index;

- (void)saveDataToFile:(id<AAICWritableData>)data
            completion:(void (^ _Nullable)(BOOL success))completion;

@end
 

@protocol AAICMutiFilesUploadStrategy <NSObject>

@property(nonatomic, readonly) NSString *fileDirPath;

- (BOOL)shouldUploadFiles;

- (NSArray<NSString *> * _Nullable)getPendingFiles;

- (void)uploadFiles:(NSArray<NSString *> *)filePaths
      callbackQueue:(dispatch_queue_t)queue
         completion:(void (^ _Nullable)(BOOL success, NSInteger uploadedCount))completion;
@end


@protocol AAICFileUploader <NSObject>

@property(nonatomic, strong, readonly) id<AAICMutiFilesUploadStrategy> uploadStrategy;

- (instancetype)initWithUploadStrategy:(id<AAICMutiFilesUploadStrategy>)uploadStrategy
                                 queue:(dispatch_queue_t _Nullable)queue;

- (dispatch_queue_t _Nullable)uploadQueue;

- (void)uploadFiles:(void(^ _Nullable)(BOOL success, NSArray<NSString *> *filePathList))complete;

@end

NS_ASSUME_NONNULL_END
