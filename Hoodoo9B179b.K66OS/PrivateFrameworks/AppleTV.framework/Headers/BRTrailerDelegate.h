/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class BRMovieTrailer, NSXMLParser, BRMovieTrailersProvider, NSMutableArray, BRResolution;

__attribute__((visibility("hidden")))
@interface BRTrailerDelegate : BRBaseParserDelegate {
@private
	BRMovieTrailersProvider *_provider;	// 12 = 0xc
	BRMovieTrailer *_movieTrailer;	// 16 = 0x10
	NSMutableArray *_elementCollection;	// 20 = 0x14
	BRResolution *_resolution;	// 24 = 0x18
	NSXMLParser *_parser;	// 28 = 0x1c
}
- (id)initWithMediaProvider:(id)mediaProvider resolution:(id)resolution;	// 0x30352fdd
- (void)dealloc;	// 0x30353061
- (void)endCast;	// 0x303536cd
- (void)endCopyright;	// 0x3035350d
- (void)endDescription;	// 0x303535b5
- (void)endDirector;	// 0x30353561
- (void)endGenre;	// 0x30353771
- (void)endLarge;	// 0x303539a9
- (void)endLocation;	// 0x303538b9
- (void)endMovieinfo;	// 0x303531c5
- (void)endName;	// 0x30353625
- (void)endPostdate;	// 0x30353465
- (void)endPoster;	// 0x30353961
- (void)endRating;	// 0x303533bd
- (void)endReleasedate;	// 0x303534b9
- (void)endRuntime;	// 0x30353369
- (void)endStudio;	// 0x30353411
- (void)endTitle;	// 0x303532e9
- (void)endXlarge;	// 0x3035390d
- (void)setWeakReferenceToParser:(id)parser;	// 0x303530e9
- (void)startCastWithAttributes:(id)attributes;	// 0x30353675
- (void)startGenreWithAttributes:(id)attributes;	// 0x30353719
- (void)startMovieinfoWithAttributes:(id)attributes;	// 0x303530f9
@end

