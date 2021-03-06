/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask {
	id _appSpecificDataItemResult;	// 132 = 0x84
	BOOL _forceNoCache;	// 136 = 0x88
}
@property(retain) id appSpecificDataItemResult;	// G=0x35f70901; S=0x35f70915; @synthesize=_appSpecificDataItemResult
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(assign) BOOL forceNoCache;	// G=0x35f70925; S=0x35f7093d; @synthesize=_forceNoCache
// declared property getter: - (id)appSpecificDataItemResult;	// 0x35f70901
- (unsigned)cachePolicy;	// 0x35f70735
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x35f70759
- (void)dealloc;	// 0x35f70595
- (id)description;	// 0x35f705e1
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35f7078d
// declared property getter: - (BOOL)forceNoCache;	// 0x35f70925
- (id)httpMethod;	// 0x35f70729
- (id)requestBody;	// 0x35f70755
// declared property setter: - (void)setAppSpecificDataItemResult:(id)result;	// 0x35f70915
// declared property setter: - (void)setForceNoCache:(BOOL)cache;	// 0x35f7093d
@end

