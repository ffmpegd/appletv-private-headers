/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem {
	CoreDAVPrincipalItem *_principal;	// 28 = 0x1c
}
@property(retain) CoreDAVPrincipalItem *principal;	// G=0x3371454d; S=0x33714561; @synthesize=_principal
+ (id)copyParseRules;	// 0x337143c1
- (id)init;	// 0x337141e9
- (void)dealloc;	// 0x33714215
- (id)description;	// 0x3371430d
// declared property getter: - (id)principal;	// 0x3371454d
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x33714561
- (void)write:(id)write;	// 0x33714261
@end

