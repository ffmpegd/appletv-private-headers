/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MusicLibrary-Structs.h"

@class NSString, NSArray, NSMutableDictionary;

@interface MLMovieProperties : NSObject <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *castMembers;	// G=0x333f69d5; S=0x333f68a9; 
@property(copy, nonatomic) NSString *copyrightWarning;	// G=0x333f6991; S=0x333f688d; 
@property(copy, nonatomic) NSArray *directors;	// G=0x333f694d; S=0x333f6871; 
@property(copy, nonatomic) NSArray *producers;	// G=0x333f6909; S=0x333f6855; 
@property(copy, nonatomic) NSArray *screenwriters;	// G=0x333f68c5; S=0x333f6839; 
@property(copy, nonatomic) NSString *studioName;	// G=0x333f67d9; S=0x333f681d; 
- (id)init;	// 0x333f6a5d
- (id)initWithMoviePropertiesDictionary:(id)moviePropertiesDictionary;	// 0x333f6b85
- (void)_setValue:(id)value forKey:(id)key;	// 0x333f6771
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x333f6731
// declared property getter: - (id)castMembers;	// 0x333f69d5
- (id)copyMoviePropertiesDictionary;	// 0x333f67b9
- (id)copyWithZone:(NSZone *)zone;	// 0x333f6a19
// declared property getter: - (id)copyrightWarning;	// 0x333f6991
- (void)dealloc;	// 0x333f6b3d
// declared property getter: - (id)directors;	// 0x333f694d
// declared property getter: - (id)producers;	// 0x333f6909
// declared property getter: - (id)screenwriters;	// 0x333f68c5
// declared property setter: - (void)setCastMembers:(id)members;	// 0x333f68a9
// declared property setter: - (void)setCopyrightWarning:(id)warning;	// 0x333f688d
// declared property setter: - (void)setDirectors:(id)directors;	// 0x333f6871
// declared property setter: - (void)setProducers:(id)producers;	// 0x333f6855
// declared property setter: - (void)setScreenwriters:(id)screenwriters;	// 0x333f6839
// declared property setter: - (void)setStudioName:(id)name;	// 0x333f681d
// declared property getter: - (id)studioName;	// 0x333f67d9
@end

