//
//  DetailViewController.h
//  prova
//
//  Created by MIRKO COLLECCHI on 25/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>



@property (strong, nonatomic) id detailItem;



@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;



@end
