//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXDocumentController;
@protocol SXHost, SXResourceDataSource, SXTextContentProvider;

@interface SXContext : NSObject
{
    id <SXHost> _host;
    SXDocumentController *_documentController;
    id <SXTextContentProvider> _textContentProvider;
    id <SXResourceDataSource> _resourceDataSource;
}

+ (void)prewarm;
@property(readonly, nonatomic) __weak id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property(readonly, nonatomic) id <SXTextContentProvider> textContentProvider; // @synthesize textContentProvider=_textContentProvider;
@property(readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)initWithJSONData:(id)arg1 resourceDataSource:(id)arg2 host:(id)arg3 error:(id *)arg4;

@end

