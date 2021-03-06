/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVHSQueryHelper : XXUnknownSuperclass {
}
+ (id)atvFilterWithProperty:(id)property query:(id)query;	// 0xefee1
+ (id)dmapStrForATVProperty:(id)atvproperty dpap:(BOOL)dpap;	// 0xf00c9
+ (BOOL)isDPAPQuery:(id)query dataClient:(id)client;	// 0xeece5
+ (id)mediaKindForATVMediaType:(id)atvmediaType;	// 0xef681
+ (id)mediaKindForPlaylistMediaType:(id)playlistMediaType;	// 0xef7c1
+ (id)queryArgumentWithATVFilter:(id)atvfilter queryType:(int)type;	// 0xef341
+ (id)queryArgumentWithProperty:(id)property operator:(int)anOperator value:(id)value;	// 0xef519
+ (void)setMetaDataArgumentWithRequest:(id)request query:(id)query dpap:(BOOL)dpap;	// 0xef895
+ (void)setQueryArgumentWithRequest:(id)request query:(id)query;	// 0xeedd1
+ (void)setRangeArgumentWithRequest:(id)request query:(id)query;	// 0xefe15
+ (void)setSortArgumentWithRequest:(id)request query:(id)query dpap:(BOOL)dpap;	// 0xefbcd
@end

