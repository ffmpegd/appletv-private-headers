/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 28 = 0x1c
}
@property(retain) NSMutableSet *privileges;	// G=0x33717ecd; S=0x33717ee1; @synthesize=_privileges
+ (id)copyParseRules;	// 0x33717a9d
- (id)init;	// 0x33717961
- (void)addPrivilege:(id)privilege;	// 0x33717c21
- (void)dealloc;	// 0x3371798d
- (id)description;	// 0x337179d9
- (BOOL)hasPrivilegeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33717cb9
// declared property getter: - (id)privileges;	// 0x33717ecd
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x33717ee1
@end

