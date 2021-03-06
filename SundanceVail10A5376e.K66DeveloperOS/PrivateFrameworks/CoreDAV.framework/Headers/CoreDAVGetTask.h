/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask {
	id _appSpecificDataItemResult;	// 136 = 0x88
	BOOL _forceNoCache;	// 140 = 0x8c
}
@property(retain) id appSpecificDataItemResult;	// G=0x33a583e5; S=0x33a583f9; @synthesize=_appSpecificDataItemResult
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(assign) BOOL forceNoCache;	// G=0x33a58409; S=0x33a58421; @synthesize=_forceNoCache
// declared property getter: - (id)appSpecificDataItemResult;	// 0x33a583e5
- (unsigned)cachePolicy;	// 0x33a58219
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x33a5823d
- (void)dealloc;	// 0x33a58079
- (id)description;	// 0x33a580c5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33a58271
// declared property getter: - (BOOL)forceNoCache;	// 0x33a58409
- (id)httpMethod;	// 0x33a5820d
- (id)requestBody;	// 0x33a58239
// declared property setter: - (void)setAppSpecificDataItemResult:(id)result;	// 0x33a583f9
// declared property setter: - (void)setForceNoCache:(BOOL)cache;	// 0x33a58421
@end

