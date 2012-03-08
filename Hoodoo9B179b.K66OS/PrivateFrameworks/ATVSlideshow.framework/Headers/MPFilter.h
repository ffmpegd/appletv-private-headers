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

@class NSMutableDictionary, MCFilter, MPFilterInternal, NSString;
@protocol MPFilterSupport;

@interface MPFilter : NSObject <NSCoding, NSCopying, MPAnimationSupport> {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	NSMutableDictionary *_animationPaths;	// 8 = 0x8
	MCFilter *_filter;	// 12 = 0xc
	NSObject<MPFilterSupport> *_parent;	// 16 = 0x10
	MPFilterInternal *_internal;	// 20 = 0x14
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x3548d30d; converted property
@property(retain) MCFilter *filter;	// G=0x3548d675; S=0x3548d9d1; converted property
@property(copy, nonatomic) NSString *filterID;	// G=0x3548cfc9; S=0x3548cfe9; @dynamic
@property(retain) id parent;	// G=0x3548d665; S=0x3548dda9; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x3548d08d; S=0x3548d0ad; @dynamic
+ (id)filterWithFilterID:(id)filterID;	// 0x3548c969
- (id)init;	// 0x3548ca15
- (id)initWithCoder:(id)coder;	// 0x3548cd19
- (id)initWithFilterID:(id)filterID;	// 0x3548c9a5
- (id)animationPathForKey:(id)key;	// 0x3548d31d
// converted property getter: - (id)animationPaths;	// 0x3548d30d
- (id)convertMCAttributeToMPAttribute:(id)mpattribute withKey:(id)key;	// 0x3548d809
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x3548d7bd
- (void)copyAnimationPaths:(id)paths;	// 0x3548d8f9
- (void)copyStruct:(id)aStruct;	// 0x3548d855
- (id)copyWithZone:(NSZone *)zone;	// 0x3548cad1
- (void)dealloc;	// 0x3548cf29
- (id)description;	// 0x3548cb55
- (void)dump;	// 0x3548d685
- (void)encodeWithCoder:(id)coder;	// 0x3548cc15
// converted property getter: - (id)filter;	// 0x3548d675
- (id)filterAttributeForKey:(id)key;	// 0x3548d179
- (id)filterAttributes;	// 0x3548d169
// declared property getter: - (id)filterID;	// 0x3548cfc9
- (void)finalize;	// 0x3548cefd
- (id)fullDebugLog;	// 0x3548d6ad
- (int)index;	// 0x3548d621
// converted property getter: - (id)parent;	// 0x3548d665
- (id)parentDocument;	// 0x3548de05
// declared property getter: - (id)presetID;	// 0x3548d08d
- (void)removeAnimationPathForKey:(id)key;	// 0x3548d539
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3548d33d
- (void)setDefaults;	// 0x3548d6ed
// converted property setter: - (void)setFilter:(id)filter;	// 0x3548d9d1
- (void)setFilterAttribute:(id)attribute forKey:(id)key;	// 0x3548d199
// declared property setter: - (void)setFilterID:(id)anId;	// 0x3548cfe9
// converted property setter: - (void)setParent:(id)parent;	// 0x3548dda9
// declared property setter: - (void)setPresetID:(id)anId;	// 0x3548d0ad
@end
