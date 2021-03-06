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
@property(retain) NSMutableSet *privileges;	// G=0x36007f3d; S=0x36007f51; @synthesize=_privileges
+ (id)copyParseRules;	// 0x36007b0d
- (id)init;	// 0x360079d1
- (void)addPrivilege:(id)privilege;	// 0x36007c91
- (void)dealloc;	// 0x360079fd
- (id)description;	// 0x36007a49
- (BOOL)hasPrivilegeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x36007d29
// declared property getter: - (id)privileges;	// 0x36007f3d
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x36007f51
@end

