/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface CIFilterClassDescription : NSObject {
@private
	NSMutableDictionary *attributes;	// 4 = 0x4
	NSArray *inputKeys;	// 8 = 0x8
	NSArray *outputKeys;	// 12 = 0xc
}
@property(readonly, retain) NSMutableDictionary *attributes;	// G=0x306f93ed; converted property
@property(readonly, retain) NSArray *inputKeys;	// G=0x306f93cd; converted property
@property(readonly, retain) NSArray *outputKeys;	// G=0x306f93dd; converted property
+ (id)classDescriptionForClass:(Class)aClass;	// 0x306f8c7d
- (id)initWithClass:(Class)aClass;	// 0x306f8d49
// converted property getter: - (id)attributes;	// 0x306f93ed
// converted property getter: - (id)inputKeys;	// 0x306f93cd
// converted property getter: - (id)outputKeys;	// 0x306f93dd
@end

