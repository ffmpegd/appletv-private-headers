/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AddressBookUI-Structs.h"


@interface ABPropertyGroupIdentifier : NSObject <NSCopying> {
	int _property;	// 4 = 0x4
	void *_context;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) void *context;	// G=0x371bd575; @synthesize=_context
@property(readonly, assign, nonatomic) int property;	// G=0x371bd565; @synthesize=_property
+ (id)propertyGroupIdentifierWithProperty:(int)property context:(void *)context;	// 0x371bd525
- (id)initWithProperty:(int)property context:(void *)context;	// 0x3714dc01
// declared property getter: - (void *)context;	// 0x371bd575
- (id)copyWithZone:(NSZone *)zone;	// 0x37153709
- (unsigned)hash;	// 0x371536e9
- (BOOL)isEqual:(id)equal;	// 0x371539dd
// declared property getter: - (int)property;	// 0x371bd565
@end
