//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MovieDataNotificationHandler : NSObject
{
    struct CMovieData *_movieData;
}

+ (struct CDocumentLogic *)validDocWithMovieData:(struct CMovieData *)arg1 notification:(id)arg2;
@property(nonatomic) struct CMovieData *movieData; // @synthesize movieData=_movieData;
- (void)handleMovieFileDidChange:(id)arg1;
- (void)handleDocumentDidOpen:(id)arg1;
- (void)handleDocumentWillClose:(id)arg1;
- (id)init;
- (id)initWithMovieData:(struct CMovieData *)arg1;

@end

