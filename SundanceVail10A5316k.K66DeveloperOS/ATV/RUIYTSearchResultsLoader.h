/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, NSMutableDictionary, RUIYTDocumentLoader;

__attribute__((visibility("hidden")))
@interface RUIYTSearchResultsLoader : XXUnknownSuperclass <RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	NSMutableDictionary *_loadingResults;	// 8 = 0x8
	NSString *_searchTerm;	// 12 = 0xc
}
@property(readonly, assign) NSDictionary *results;	// G=0x248ce9; 
@property(readonly, assign) NSString *searchTerm;	// G=0x2490e9; @synthesize=_searchTerm
- (id)init;	// 0x248c0d
- (void).cxx_destruct;	// 0x249109
- (void)dealloc;	// 0x248c99
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x248f65
- (void)loadResultsForSearchTerm:(id)searchTerm;	// 0x248cfd
// declared property getter: - (id)results;	// 0x248ce9
// declared property getter: - (id)searchTerm;	// 0x2490e9
@end
