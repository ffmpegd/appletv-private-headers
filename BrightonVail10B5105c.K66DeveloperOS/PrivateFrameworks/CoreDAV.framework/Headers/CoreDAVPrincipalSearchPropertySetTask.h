/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate;

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask {
}
@property(assign, nonatomic) id<CoreDAVPrincipalSearchPropertySetTaskDelegate> delegate;	// @dynamic
- (id)initWithURL:(id)url;	// 0x36002ba1
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x36002c99
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x36002d29
- (id)httpMethod;	// 0x36002be1
- (id)requestBody;	// 0x36002bed
@end
