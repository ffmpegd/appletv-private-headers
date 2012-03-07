/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	unsigned _type;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	unsigned _flags;	// 12 = 0xc
	void *_attr;	// 16 = 0x10
	void *_cache;	// 20 = 0x14
}
@property(assign) BOOL cachesInputImage;	// G=0x3362adf1; S=0x3362b139; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x3362addd; S=0x3362b125; 
@property(copy) NSString *name;	// G=0x33574799; S=0x3362afe9; 
@property(readonly, assign) NSString *type;	// G=0x3362ae09; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3362ae05
+ (id)filterTypes;	// 0x3362aeed
+ (id)filterWithName:(id)name;	// 0x3362afd9
+ (id)filterWithType:(id)type;	// 0x3362af9d
- (id)initWithCoder:(id)coder;	// 0x3362b285
- (id)initWithName:(id)name;	// 0x3362ae95
- (id)initWithType:(id)type;	// 0x3362ae1d
- (Object *)CA_copyRenderValue;	// 0x3357b9dd
// declared property getter: - (BOOL)cachesInputImage;	// 0x3362adf1
- (id)copyWithZone:(NSZone *)zone;	// 0x335759a5
- (void)dealloc;	// 0x3362b1f5
- (BOOL)enabled;	// 0x3362aea5
- (void)encodeWithCoder:(id)coder;	// 0x3362b3cd
// declared property getter: - (BOOL)isEnabled;	// 0x3362addd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33575995
// declared property getter: - (id)name;	// 0x33574799
// declared property setter: - (void)setCachesInputImage:(BOOL)image;	// 0x3362b139
- (void)setDefaults;	// 0x3362b1a1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3362b125
// declared property setter: - (void)setName:(id)name;	// 0x3362afe9
- (void)setValue:(id)value forKey:(id)key;	// 0x33575a65
// declared property getter: - (id)type;	// 0x3362ae09
- (id)valueForKey:(id)key;	// 0x335747a9
@end
