/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPostTask.h"

@class CoreDAVAction;

@interface CoreDAVSyncPostTask : CoreDAVPostTask {
	CoreDAVAction *_action;	// 148 = 0x94
}
@property(readonly, assign) CoreDAVAction *action;	// G=0x30fdfb5d; @synthesize=_action
// declared property getter: - (id)action;	// 0x30fdfb5d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x30fdfacd
- (void)setAction:(id)action;	// 0x30fdfabd
@end
