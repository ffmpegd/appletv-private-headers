/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVMultiStatusItem.h"

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {
	NSString *_syncToken;	// 32 = 0x20
}
@property(readonly, retain) NSString *syncToken;	// G=0x317c0ed1; @synthesize=_syncToken
- (void)_setSyncTokenItem:(id)item;	// 0x317c0c3d
- (id)copyParseRules;	// 0x317c0c89
- (void)dealloc;	// 0x317c0e89
- (id)description;	// 0x317c0dd9
// declared property getter: - (id)syncToken;	// 0x317c0ed1
@end
