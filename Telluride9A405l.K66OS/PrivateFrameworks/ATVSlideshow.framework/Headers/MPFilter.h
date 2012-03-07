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
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x334cf2f5; converted property
@property(retain) MCFilter *filter;	// G=0x334cf65d; S=0x334cf9b9; converted property
@property(copy) NSString *filterID;	// G=0x334cefb1; S=0x334cefd1; @dynamic
@property(retain) id parent;	// G=0x334cf64d; S=0x334cfd91; converted property
@property(copy) NSString *presetID;	// G=0x334cf075; S=0x334cf095; @dynamic
+ (id)filterWithFilterID:(id)filterID;	// 0x334ce951
- (id)init;	// 0x334ce9fd
- (id)initWithCoder:(id)coder;	// 0x334ced01
- (id)initWithFilterID:(id)filterID;	// 0x334ce98d
- (id)animationPathForKey:(id)key;	// 0x334cf305
// converted property getter: - (id)animationPaths;	// 0x334cf2f5
- (id)convertMCAttributeToMPAttribute:(id)mpattribute withKey:(id)key;	// 0x334cf7f1
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x334cf7a5
- (void)copyAnimationPaths:(id)paths;	// 0x334cf8e1
- (void)copyStruct:(id)aStruct;	// 0x334cf83d
- (id)copyWithZone:(NSZone *)zone;	// 0x334ceab9
- (void)dealloc;	// 0x334cef11
- (id)description;	// 0x334ceb3d
- (void)dump;	// 0x334cf66d
- (void)encodeWithCoder:(id)coder;	// 0x334cebfd
// converted property getter: - (id)filter;	// 0x334cf65d
- (id)filterAttributeForKey:(id)key;	// 0x334cf161
- (id)filterAttributes;	// 0x334cf151
// declared property getter: - (id)filterID;	// 0x334cefb1
- (void)finalize;	// 0x334ceee5
- (id)fullDebugLog;	// 0x334cf695
- (int)index;	// 0x334cf609
// converted property getter: - (id)parent;	// 0x334cf64d
- (id)parentDocument;	// 0x334cfded
// declared property getter: - (id)presetID;	// 0x334cf075
- (void)removeAnimationPathForKey:(id)key;	// 0x334cf521
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x334cf325
- (void)setDefaults;	// 0x334cf6d5
// converted property setter: - (void)setFilter:(id)filter;	// 0x334cf9b9
- (void)setFilterAttribute:(id)attribute forKey:(id)key;	// 0x334cf181
// declared property setter: - (void)setFilterID:(id)anId;	// 0x334cefd1
// converted property setter: - (void)setParent:(id)parent;	// 0x334cfd91
// declared property setter: - (void)setPresetID:(id)anId;	// 0x334cf095
@end

