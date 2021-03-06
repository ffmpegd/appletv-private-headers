/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSMutableCopying.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSArray *_sections;	// 4 = 0x4
	NSArray *_sectionIndexTitles;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3017bbf9; 
@property(copy, nonatomic) NSArray *sectionIndexTitles;	// G=0x3017bc59; S=0x3017bc69; @synthesize=_sectionIndexTitles
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x3017bc49; @synthesize=_sections
- (id)initWithCoder:(id)coder;	// 0x3017b8c5
- (id)copyWithZone:(NSZone *)zone;	// 0x3017b845
// declared property getter: - (unsigned)count;	// 0x3017bbf9
- (void)dealloc;	// 0x3017b7e5
- (id)description;	// 0x3017b7c5
- (void)encodeWithCoder:(id)coder;	// 0x3017b955
- (unsigned)indexOfSectionForSectionIndexTitleAtIndex:(unsigned)index;	// 0x3017ba41
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3017b9c5
// declared property getter: - (id)sectionIndexTitles;	// 0x3017bc59
// declared property getter: - (id)sections;	// 0x3017bc49
// declared property setter: - (void)setSectionIndexTitles:(id)titles;	// 0x3017bc69
@end

