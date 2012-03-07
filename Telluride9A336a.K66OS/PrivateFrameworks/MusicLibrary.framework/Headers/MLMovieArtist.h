/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSMutableDictionary, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface MLMovieArtist : NSObject <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x30e27f3d; S=0x30e27fa9; 
@property(copy, nonatomic) NSString *artistName;	// G=0x30e27eed; S=0x30e27f8d; 
- (id)init;	// 0x30e27dbd
- (id)initWithMovieArtistDictionary:(id)movieArtistDictionary;	// 0x30e27dd1
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x30e27f3d
- (void)_setValue:(id)value forKey:(id)key;	// 0x30e27fe5
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x30e28021
// declared property getter: - (id)artistName;	// 0x30e27eed
- (id)copyMovieArtistDictionary;	// 0x30e27fc5
- (id)copyWithZone:(NSZone *)zone;	// 0x30e27ea1
- (void)dealloc;	// 0x30e27e55
// declared property setter: - (void)setArtistName:(id)name;	// 0x30e27f8d
// declared property setter: - (void)setITunesStoreIdentifier:(id)identifier;	// 0x30e27fa9
@end

