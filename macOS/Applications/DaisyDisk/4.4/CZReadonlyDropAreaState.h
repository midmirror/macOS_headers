//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CZDropAreaState.h"

@class CZReadonlyDropAreaStateStyles, NSString;

@interface CZReadonlyDropAreaState : CZDropAreaState
{
    CZReadonlyDropAreaStateStyles *_styles;
    BOOL _volumeOrDirectory;
    NSString *_sourceName;
}

@property(nonatomic) BOOL volumeOrDirectory; // @synthesize volumeOrDirectory=_volumeOrDirectory;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
- (void).cxx_destruct;
- (void)stateDidSelect:(BOOL)arg1;
- (id)initWithContext:(id)arg1 styles:(id)arg2;

@end

