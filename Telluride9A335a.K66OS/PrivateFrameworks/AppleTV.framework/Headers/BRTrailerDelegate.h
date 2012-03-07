/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSXMLParser, NSMutableArray, BRResolution, BRMovieTrailer, BRMovieTrailersProvider;

__attribute__((visibility("hidden")))
@interface BRTrailerDelegate : BRBaseParserDelegate {
@private
	BRMovieTrailersProvider *_provider;	// 12 = 0xc
	BRMovieTrailer *_movieTrailer;	// 16 = 0x10
	NSMutableArray *_elementCollection;	// 20 = 0x14
	BRResolution *_resolution;	// 24 = 0x18
	NSXMLParser *_parser;	// 28 = 0x1c
}
- (id)initWithMediaProvider:(id)mediaProvider resolution:(id)resolution;	// 0x3429ef81
- (void)dealloc;	// 0x3429f005
- (void)endCast;	// 0x3429f671
- (void)endCopyright;	// 0x3429f4b1
- (void)endDescription;	// 0x3429f559
- (void)endDirector;	// 0x3429f505
- (void)endGenre;	// 0x3429f715
- (void)endLarge;	// 0x3429f94d
- (void)endLocation;	// 0x3429f85d
- (void)endMovieinfo;	// 0x3429f169
- (void)endName;	// 0x3429f5c9
- (void)endPostdate;	// 0x3429f409
- (void)endPoster;	// 0x3429f905
- (void)endRating;	// 0x3429f361
- (void)endReleasedate;	// 0x3429f45d
- (void)endRuntime;	// 0x3429f30d
- (void)endStudio;	// 0x3429f3b5
- (void)endTitle;	// 0x3429f28d
- (void)endXlarge;	// 0x3429f8b1
- (void)setWeakReferenceToParser:(id)parser;	// 0x3429f08d
- (void)startCastWithAttributes:(id)attributes;	// 0x3429f619
- (void)startGenreWithAttributes:(id)attributes;	// 0x3429f6bd
- (void)startMovieinfoWithAttributes:(id)attributes;	// 0x3429f09d
@end

