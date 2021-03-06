/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseParserDelegate.h"

@class BRResolution, NSMutableArray, BRMovieTrailer, NSXMLParser, BRMovieTrailersProvider;

__attribute__((visibility("hidden")))
@interface BRTrailerDelegate : BRBaseParserDelegate {
	BRMovieTrailersProvider *_provider;	// 12 = 0xc
	BRMovieTrailer *_movieTrailer;	// 16 = 0x10
	NSMutableArray *_elementCollection;	// 20 = 0x14
	BRResolution *_resolution;	// 24 = 0x18
	NSXMLParser *_parser;	// 28 = 0x1c
}
- (id)initWithMediaProvider:(id)mediaProvider resolution:(id)resolution;	// 0x39892d
- (void)dealloc;	// 0x3989b1
- (void)endCast;	// 0x399035
- (void)endCopyright;	// 0x398e71
- (void)endDescription;	// 0x398f21
- (void)endDirector;	// 0x398ec9
- (void)endGenre;	// 0x3990d1
- (void)endLarge;	// 0x399325
- (void)endLocation;	// 0x399231
- (void)endMovieinfo;	// 0x398b19
- (void)endName;	// 0x398f8d
- (void)endPostdate;	// 0x398dc1
- (void)endPoster;	// 0x3992e1
- (void)endRating;	// 0x398d11
- (void)endReleasedate;	// 0x398e19
- (void)endRuntime;	// 0x398cb9
- (void)endStudio;	// 0x398d69
- (void)endTitle;	// 0x398c3d
- (void)endXlarge;	// 0x399289
- (void)setWeakReferenceToParser:(id)parser;	// 0x398a3d
- (void)startCastWithAttributes:(id)attributes;	// 0x398fe1
- (void)startGenreWithAttributes:(id)attributes;	// 0x39907d
- (void)startMovieinfoWithAttributes:(id)attributes;	// 0x398a4d
@end

