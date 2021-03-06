/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {
	NSSet *_properties;	// 4 = 0x4
}
@property(readonly, assign) NSSet *stringProperties;	// G=0x338f3c81; @synthesize=_properties
@property(readonly, assign) BOOL supportsPropertySearch;	// G=0x338f3c1d; 
+ (id)searchSetWithProperties:(id)properties;	// 0x338f3b3d
- (id)initWithSearchProperties:(id)searchProperties;	// 0x338f38ed
- (id)initWithStringProperties:(id)stringProperties;	// 0x338f3ae9
- (void)dealloc;	// 0x338f38a1
- (BOOL)isEqualToPropertySet:(id)propertySet;	// 0x338f3c49
// declared property getter: - (id)stringProperties;	// 0x338f3c81
// declared property getter: - (BOOL)supportsPropertySearch;	// 0x338f3c1d
- (BOOL)supportsPropertyTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338f3b85
- (BOOL)supportsWellKnownType:(int)type;	// 0x338f3bd1
@end

