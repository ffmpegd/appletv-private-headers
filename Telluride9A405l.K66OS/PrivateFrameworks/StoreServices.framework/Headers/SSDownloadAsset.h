/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"

@class SSURLRequestProperties, NSArray, NSString, NSURLRequest;

@interface SSDownloadAsset : SSEntity {
@private
	int _assetType;	// 28 = 0x1c
	SSURLRequestProperties *_localProperties;	// 32 = 0x20
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x364fd535; 
@property(readonly, assign) SSURLRequestProperties *URLRequestProperties;	// G=0x364fd5fd; 
@property(readonly, assign) int assetType;	// G=0x364fdb75; converted property
@property(readonly, assign) NSString *downloadFileName;	// G=0x364fdb85; 
@property(readonly, assign) NSString *downloadPath;	// G=0x364fdbb9; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x364fdc11; 
@property(readonly, assign) long long fileSize;	// G=0x364fdbd9; 
@property(readonly, assign) NSString *finalizedPath;	// G=0x364fdbd5; 
@property(readonly, assign) NSArray *sinfs;	// G=0x364fd519; 
+ (long long)_existsMessage;	// 0x364fd589
+ (long long)_getExternalValuesMessage;	// 0x364fd591
+ (long long)_getValueMessage;	// 0x364fd599
+ (long long)_setValuesMessage;	// 0x364fd5a1
+ (id)assetWithURL:(id)url type:(int)type;	// 0x364fdac9
- (id)initWithURLRequest:(id)urlrequest;	// 0x364fd421
- (id)initWithURLRequest:(id)urlrequest type:(int)type;	// 0x364fdb49
// declared property getter: - (id)URLRequest;	// 0x364fd535
// declared property getter: - (id)URLRequestProperties;	// 0x364fd5fd
- (id)_copyURLRequestProperties;	// 0x364fdc41
- (id)_initWithDownloadMetadata:(id)downloadMetadata type:(id)type;	// 0x364fd625
- (int)_legacyAssetType;	// 0x364fd9cd
- (void)_resetLocalIVars;	// 0x364fd5a9
// converted property getter: - (int)assetType;	// 0x364fdb75
- (long long)bytesDownloaded;	// 0x364fd4e1
- (void *)copyXPCEncoding;	// 0x364fd9dd
- (void)dealloc;	// 0x364fd495
// declared property getter: - (id)downloadFileName;	// 0x364fdb85
// declared property getter: - (id)downloadPath;	// 0x364fdbb9
// declared property getter: - (long long)fileSize;	// 0x364fdbd9
// declared property getter: - (id)finalizedPath;	// 0x364fdbd5
// declared property getter: - (BOOL)isExternal;	// 0x364fdc11
// declared property getter: - (id)sinfs;	// 0x364fd519
@end

