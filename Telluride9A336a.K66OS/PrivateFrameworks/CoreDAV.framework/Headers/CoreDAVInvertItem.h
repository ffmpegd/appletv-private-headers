/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem {
	CoreDAVPrincipalItem *_principal;	// 24 = 0x18
}
@property(retain) CoreDAVPrincipalItem *principal;	// G=0x32c51e21; S=0x32c51e35; @synthesize=_principal
- (id)init;	// 0x32c51b4d
- (id)copyParseRules;	// 0x32c51d25
- (void)dealloc;	// 0x32c51b79
- (id)description;	// 0x32c51c71
// declared property getter: - (id)principal;	// 0x32c51e21
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x32c51e35
- (void)write:(id)write;	// 0x32c51bc5
@end

