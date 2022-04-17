const char Home[] PROGMEM = R"=====(
<!DOCTYPE html> 

     <html lang='fr'> 

     <head> 
         <title>Serveur ESP32</title> 
         <meta http-equiv='refresh' content='60' name='viewport' content='width=device-width, initial-scale=1' charset='UTF-8' /> 
         <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.0.0/dist/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">
     </head> 

     <body> 
         
        <nav class="navbar navbar-expand-lg navbar-light bg-primary">
            <a class="navbar-brand" class="text-success"  href="#">A.L.T</a>
            <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
              <span class="navbar-toggler-icon"></span>
            </button>
          
            <div class="collapse navbar-collapse" id="navbarSupportedContent">
              <ul class="navbar-nav mr-auto">
                <li class="nav-item active">
                  <a class="nav-link" href="#">Home<span class="sr-only">(current)</span></a>
                </li>
                <li class="nav-item">
                  <a class="nav-link" href="#">supervision</a>
                </li>
                <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" id="navbarDropdownMenuLink" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                        Maison
                      </a>
                      <div class="dropdown-menu" aria-labelledby="navbarDropdownMenuLink">
                        <a class="dropdown-item" href="#">cuisine</a>
                        <a class="dropdown-item" href="#">chambre</a>
                        <a class="dropdown-item" href="#">salon</a>
                </li>
                <li class="nav-item">
                  <a class="nav-link disabled" href="#">autres options</a>
                </li>
              </ul>
              <form class="form-inline my-2 my-lg-0">
                <input class="form-control mr-sm-2" type="search" placeholder="TV" aria-label="Search">
                <button class="btn btn-outline-success my-2 my-sm-0" type="submit">rechercher</button>
              </form>
            </div>
       </nav>

          <br>
            <div class="p-3 mb-2 bg-dark text-white"> 
               <h1 style="text-align: center;">  CONTROLE DES APPAREILS ELECTRONIQUES  </h1>
            </div>
          <br>
            <div  class="row justify-content-lg-center" >
                <div class="col col-lg-2 bg-success">
                    <a class="nav-link" href="/on"><h3> LED ON </h3></button> </a>
                </div>
            </div>
            <br>
            <div class="row justify-content-lg-center">
                <div class="col col-lg-2 bg-danger">
                    <a class="nav-link" href="/off"> <h3> LED OFF </h3></button></a>
                </div>
            </div>
          <br>

         <div class="p-3 mb-2 bg-dark text-white" > 
             <p style="text-align: center;" >il est important de noter que  ce serveur est heberge sur un ESP32</p> 
              <p style="text-align: center;"><i > A.L.T development </i> </p>
        </div> 

    </body>

    </html>








)=====";
