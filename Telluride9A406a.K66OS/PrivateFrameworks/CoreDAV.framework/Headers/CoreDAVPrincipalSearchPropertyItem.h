/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem {
	CoreDAVItem *_prop;	// 24 = 0x18
	CoreDAVLeafItem *_descriptionItem;	// 28 = 0x1c
}
@property(retain) CoreDAVLeafItem *descriptionItem;	// G=0x31c529f1; S=0x31c52a05; @synthesize=_descriptionItem
@property(retain) CoreDAVItem *prop;	// G=0x31c529b9; S=0x31c529cd; @synthesize=_prop
- (id)init;	// 0x31c526b5
- (id)copyParseRules;	// 0x31c52819
- (void)dealloc;	// 0x31c526e1
- (id)description;	// 0x31c52741
// declared property getter: - (id)descriptionItem;	// 0x31c529f1
// declared property getter: - (id)prop;	// 0x31c529b9
// declared property setter: - (void)setDescriptionItem:(id)item;	// 0x31c52a05
// declared property setter: - (void)setProp:(id)prop;	// 0x31c529cd
@end
