/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"

@class MCFilter, NSMutableDictionary, MPFilterInternal, NSString;
@protocol MPFilterSupport;

@interface MPFilter : NSObject <NSCoding, NSCopying, MPAnimationSupport> {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	NSMutableDictionary *_animationPaths;	// 8 = 0x8
	MCFilter *_filter;	// 12 = 0xc
	NSObject<MPFilterSupport> *_parent;	// 16 = 0x10
	MPFilterInternal *_internal;	// 20 = 0x14
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x32ea62f5; converted property
@property(retain) MCFilter *filter;	// G=0x32ea665d; S=0x32ea69b9; converted property
@property(copy) NSString *filterID;	// G=0x32ea5fb1; S=0x32ea5fd1; @dynamic
@property(retain) id parent;	// G=0x32ea664d; S=0x32ea6d91; converted property
@property(copy) NSString *presetID;	// G=0x32ea6075; S=0x32ea6095; @dynamic
+ (id)filterWithFilterID:(id)filterID;	// 0x32ea5951
- (id)init;	// 0x32ea59fd
- (id)initWithCoder:(id)coder;	// 0x32ea5d01
- (id)initWithFilterID:(id)filterID;	// 0x32ea598d
- (id)animationPathForKey:(id)key;	// 0x32ea6305
// converted property getter: - (id)animationPaths;	// 0x32ea62f5
- (id)convertMCAttributeToMPAttribute:(id)mpattribute withKey:(id)key;	// 0x32ea67f1
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x32ea67a5
- (void)copyAnimationPaths:(id)paths;	// 0x32ea68e1
- (void)copyStruct:(id)aStruct;	// 0x32ea683d
- (id)copyWithZone:(NSZone *)zone;	// 0x32ea5ab9
- (void)dealloc;	// 0x32ea5f11
- (id)description;	// 0x32ea5b3d
- (void)dump;	// 0x32ea666d
- (void)encodeWithCoder:(id)coder;	// 0x32ea5bfd
// converted property getter: - (id)filter;	// 0x32ea665d
- (id)filterAttributeForKey:(id)key;	// 0x32ea6161
- (id)filterAttributes;	// 0x32ea6151
// declared property getter: - (id)filterID;	// 0x32ea5fb1
- (void)finalize;	// 0x32ea5ee5
- (id)fullDebugLog;	// 0x32ea6695
- (int)index;	// 0x32ea6609
// converted property getter: - (id)parent;	// 0x32ea664d
- (id)parentDocument;	// 0x32ea6ded
// declared property getter: - (id)presetID;	// 0x32ea6075
- (void)removeAnimationPathForKey:(id)key;	// 0x32ea6521
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x32ea6325
- (void)setDefaults;	// 0x32ea66d5
// converted property setter: - (void)setFilter:(id)filter;	// 0x32ea69b9
- (void)setFilterAttribute:(id)attribute forKey:(id)key;	// 0x32ea6181
// declared property setter: - (void)setFilterID:(id)anId;	// 0x32ea5fd1
// converted property setter: - (void)setParent:(id)parent;	// 0x32ea6d91
// declared property setter: - (void)setPresetID:(id)anId;	// 0x32ea6095
@end
