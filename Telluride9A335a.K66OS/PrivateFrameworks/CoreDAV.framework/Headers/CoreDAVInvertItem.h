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
@property(retain) CoreDAVPrincipalItem *principal;	// G=0x3006ee21; S=0x3006ee35; @synthesize=_principal
- (id)init;	// 0x3006eb4d
- (id)copyParseRules;	// 0x3006ed25
- (void)dealloc;	// 0x3006eb79
- (id)description;	// 0x3006ec71
// declared property getter: - (id)principal;	// 0x3006ee21
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x3006ee35
- (void)write:(id)write;	// 0x3006ebc5
@end

