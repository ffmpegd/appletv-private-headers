/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CoreDAVParseRule : NSObject {
	int _minimumNumber;	// 4 = 0x4
	int _maximumNumber;	// 8 = 0x8
	NSString *_nameSpace;	// 12 = 0xc
	NSString *_elementName;	// 16 = 0x10
	Class _objectClass;	// 20 = 0x14
	SEL _setterMethod;	// 24 = 0x18
}
@property(readonly, assign) NSString *elementName;	// G=0x347cb81d; @synthesize=_elementName
@property(readonly, assign) int maximumNumber;	// G=0x347cb7fd; @synthesize=_maximumNumber
@property(readonly, assign) int minimumNumber;	// G=0x347cb7ed; @synthesize=_minimumNumber
@property(readonly, assign) NSString *nameSpace;	// G=0x347cb80d; @synthesize=_nameSpace
@property(readonly, assign) Class objectClass;	// G=0x347cb82d; @synthesize=_objectClass
@property(readonly, assign) SEL setterMethod;	// G=0x347cb83d; @synthesize=_setterMethod
- (id)initWithMinimumNumber:(int)minimumNumber maximumNumber:(int)number nameSpace:(id)space elementName:(id)name objectClass:(Class)aClass setterMethod:(SEL)method;	// 0x347cb661
- (void)dealloc;	// 0x347cb71d
- (id)description;	// 0x347cb77d
// declared property getter: - (id)elementName;	// 0x347cb81d
// declared property getter: - (int)maximumNumber;	// 0x347cb7fd
// declared property getter: - (int)minimumNumber;	// 0x347cb7ed
// declared property getter: - (id)nameSpace;	// 0x347cb80d
// declared property getter: - (Class)objectClass;	// 0x347cb82d
// declared property getter: - (SEL)setterMethod;	// 0x347cb83d
@end

