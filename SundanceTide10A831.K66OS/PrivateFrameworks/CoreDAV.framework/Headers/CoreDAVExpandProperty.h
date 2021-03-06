/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject {
	NSSet *_propertiesToFind;	// 4 = 0x4
	NSString *_expandedName;	// 8 = 0x8
	NSString *_expandedNameSpace;	// 12 = 0xc
}
@property(retain) NSString *expandedName;	// G=0x3342afbd; S=0x3342afd1; @synthesize=_expandedName
@property(retain) NSString *expandedNameSpace;	// G=0x3342afe1; S=0x3342aff5; @synthesize=_expandedNameSpace
@property(retain) NSSet *propertiesToFind;	// G=0x3342af99; S=0x3342afad; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x3342af09
- (void)dealloc;	// 0x3342ae91
// declared property getter: - (id)expandedName;	// 0x3342afbd
// declared property getter: - (id)expandedNameSpace;	// 0x3342afe1
// declared property getter: - (id)propertiesToFind;	// 0x3342af99
// declared property setter: - (void)setExpandedName:(id)name;	// 0x3342afd1
// declared property setter: - (void)setExpandedNameSpace:(id)space;	// 0x3342aff5
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x3342afad
@end

